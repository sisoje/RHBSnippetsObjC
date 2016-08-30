//
//  RHBSnippets.h
//  RHBSnippets
//
//  Created by Lazar Otasevic on 6/1/16.
//
//

#ifndef RHB_SNIPPETS_H_
#define RHB_SNIPPETS_H_


#define RHB_SINGLETON_DECLARATION() RHB_SINGLETON_DECLARATION_WITH_NAME(sharedInstance)
#define RHB_SINGLETON_DECLARATION_WITH_NAME(NAME) +(instancetype)NAME

#define RHB_SINGLETON_IMPLEMENTATION() RHB_SINGLETON_IMPLEMENTATION_WITH_NAME(sharedInstance)
#define RHB_SINGLETON_IMPLEMENTATION_WITH_NAME(NAME) +(instancetype)NAME {static dispatch_once_t pred;static id sharedObject;dispatch_once(&pred,^{sharedObject=[self new];});return sharedObject;}

#define RHB_IS_IPAD() (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define RHB_IS_IPHONE() (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define RHB_IS_TV() (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomTV)
#define RHB_IS_CAR_PLAY() (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomCarPlay)
#define RHB_IS_IPHONE_6P() (RHB_IS_IPHONE() && SCREEN_MAX_LENGTH == 736.0)

#define RHB_INVERSE_255_FLOAT ((CGFloat)1/255)
#define RHB_UICOLOR_FROM_RGB(RGB) [UIColor colorWithRed:(((RGB) >> 16) & 0xFF)*RHB_INVERSE_255_FLOAT green:(((RGB) >> 8) & 0xFF)*RHB_INVERSE_255_FLOAT blue:((RGB) & 0xFF)*RHB_INVERSE_255_FLOAT alpha:1]

#define RHB_EXECUTE_CALLBACK(CALLBACK) if (CALLBACK) CALLBACK

#endif