# RHBSnippetsObjC

[![CI Status](http://img.shields.io/travis/Lazar Otasevic/RHBSnippetsObjC.svg?style=flat)](https://travis-ci.org/Lazar Otasevic/RHBSnippetsObjC)
[![Version](https://img.shields.io/cocoapods/v/RHBSnippetsObjC.svg?style=flat)](http://cocoapods.org/pods/RHBSnippetsObjC)
[![License](https://img.shields.io/cocoapods/l/RHBSnippetsObjC.svg?style=flat)](http://cocoapods.org/pods/RHBSnippetsObjC)
[![Platform](https://img.shields.io/cocoapods/p/RHBSnippetsObjC.svg?style=flat)](http://cocoapods.org/pods/RHBSnippetsObjC)

## Usage

In your source code add ```#import "RHBSnippets.h"``` and you are ready! This file will not make any troubles to your compiler since its all based upon macro definitions.

### Singleton synthetize
Instead of copy pasting this block every time:

	@implementation RHBOrientationUtilities
	
	+ (instancetype)sharedInstance {
   		static id sharedInstance;
		static dispatch_once_t onceToken;
		dispatch_once(&onceToken, ^{
			sharedInstance = [self new];
		});
		return sharedInstance;
	}
	
	/// init and other methods ...

You just add this one line:

	@implementation RHBOrientationUtilities

	RHB_SINGLETON_IMPLEMENTATION();
	
	/// init and other methods ...

### CGFloat madness [solved]

CGFloat is ```float``` on 32-bit platforms, and its ```double``` on 64-bit platforms.
There is one main macro for you to use:
		
		RHB_CG_FLOAT(0.5) translates to '0.5' or '0.5f' depending on the platform
		RHB_CG_FLOAT(ceil) translates to 'ceil' or 'ceilf' depending on the platform
		
Now you can use math functions ```ceil``` like:

		CGFloat xCeil = RHB_CG_FLOAT(ceil)(x)
		
Or you can define your custom macros:

		#define ceilcg RHB_CG_FLOAT(ceil)
		/// ...
		CGFloat xCeil = ceilcg(x)
		
		
Now you can write warning free code. Make sure to turn on as many compile warnings as possible.

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

RHBSnippetsObjC is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "RHBSnippetsObjC"
```

## Author

Lazar Otasevic, redhotbits@gmail.com

## License

RHBSnippetsObjC is available under the MIT license. See the LICENSE file for more info.
