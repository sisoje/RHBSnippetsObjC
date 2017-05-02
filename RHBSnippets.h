//
//  RHBSnippets.h
//  RHBSnippets
//
//  Created by Lazar Otasevic on 6/1/16.
//
//

#ifndef RHB_SNIPPETS_H_
#define RHB_SNIPPETS_H_

// singleton
#define RHB_SINGLETON_DECLARATION() RHB_SINGLETON_DECLARATION_WITH_NAME(sharedInstance)
#define RHB_SINGLETON_DECLARATION_WITH_NAME(NAME) +(instancetype)NAME
#define RHB_SINGLETON_IMPLEMENTATION() RHB_SINGLETON_IMPLEMENTATION_WITH_NAME(sharedInstance)
#define RHB_SINGLETON_IMPLEMENTATION_WITH_NAME(NAME) +(instancetype)NAME {static dispatch_once_t pred;static id sharedObject;dispatch_once(&pred,^{sharedObject=[self new];});return sharedObject;}

//environment
#define RHB_SCREEN_WIDTH (UIScreen.mainScreen.bounds.size.width)
#define RHB_SCREEN_HEIGHT (UIScreen.mainScreen.bounds.size.height)
#define RHB_SCREEN_MAX_LENGTH (MAX(RHB_SCREEN_WIDTH, RHB_SCREEN_HEIGHT))
#define RHB_SCREEN_MIN_LENGTH (MIN(RHB_SCREEN_WIDTH, RHB_SCREEN_HEIGHT))
#define RHB_IS_IPAD() (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define RHB_IS_IPHONE() (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define RHB_IS_TV() (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomTV)
#define RHB_IS_CAR_PLAY() (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomCarPlay)
#define RHB_IS_IPHONE_PLUS() (RHB_IS_IPHONE() && RHB_SCREEN_MAX_LENGTH == 736)
#define RHB_IS_IPAD_PRO() (RHB_IS_IPAD() && RHB_SCREEN_MAX_LENGTH == 1366)

// blocks
#define RHB_EXECUTE_BLOCK(BLOCK) if (BLOCK) BLOCK

// ui
#define RHB_UICOLOR_FROM_RGB(RGB) [UIColor colorWithRed:(((RGB) >> 16) & 0xFF) / (CGFloat)255 green:(((RGB) >> 8) & 0xFF) / (CGFloat)255 blue:((RGB) & 0xFF) / (CGFloat)255 alpha:1]

//bundle
#define RHB_SUBSPEC_BUNDLE_WITH_CLASSNAME(CLASSNAME, SUBSPECNAME) [NSBundle bundleWithURL:[[NSBundle bundleForClass:[CLASSNAME class]].bundleURL URLByAppendingPathComponent:[SUBSPECNAME stringByAppendingPathExtension:@"bundle"]]]

#endif
