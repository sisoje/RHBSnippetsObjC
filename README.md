# RHBSnippetsObjC

[![CI Status](http://img.shields.io/travis/Lazar Otasevic/RHBSnippetsObjC.svg?style=flat)](https://travis-ci.org/Lazar Otasevic/RHBSnippetsObjC)
[![Version](https://img.shields.io/cocoapods/v/RHBSnippetsObjC.svg?style=flat)](http://cocoapods.org/pods/RHBSnippetsObjC)
[![License](https://img.shields.io/cocoapods/l/RHBSnippetsObjC.svg?style=flat)](http://cocoapods.org/pods/RHBSnippetsObjC)
[![Platform](https://img.shields.io/cocoapods/p/RHBSnippetsObjC.svg?style=flat)](http://cocoapods.org/pods/RHBSnippetsObjC)

## Usage

Basically, for now its only used for singleton synthetization. It is used in .m file, and instead of copy pasting this block every time:

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

Thats it for now.

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
