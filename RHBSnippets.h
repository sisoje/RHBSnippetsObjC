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

#define RHB_SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define RHB_SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define RHB_SCREEN_MAX_LENGTH (MAX(RHB_SCREEN_WIDTH, RHB_SCREEN_HEIGHT))
#define RHB_SCREEN_MIN_LENGTH (MIN(RHB_SCREEN_WIDTH, RHB_SCREEN_HEIGHT))
#define RHB_IS_IPHONE_6PLUS() (RHB_IS_IPHONE() && RHB_SCREEN_MAX_LENGTH == 736)
#define RHB_IS_IPAD_PRO() (RHB_IS_IPAD() && RHB_SCREEN_MAX_LENGTH == 1366)

#define RHB_EXECUTE_BLOCK(BLOCK) if (BLOCK != nil) BLOCK

#define RHB_CG_INVERSE(X) ((CGFloat)1/(X))

#if defined(__LP64__) && __LP64__
#define RHB_CG_FLOAT(X) X
#else
#define RHB_CG_FLOAT(X) X##f
#endif

#define RHB_CG_DIVIDE(X, Y) ((X) * RHB_CG_INVERSE(Y))
#define RHB_CG_HALF(X) RHB_CG_DIVIDE(X, 2)

#define RHB_UICOLOR_FROM_RGB(RGB) [UIColor colorWithRed:RHB_CG_DIVIDE(((RGB) >> 16) & 0xFF, 255) green:RHB_CG_DIVIDE(((RGB) >> 8) & 0xFF, 255) blue:RHB_CG_DIVIDE((RGB) & 0xFF, 255) alpha:1]

#endif