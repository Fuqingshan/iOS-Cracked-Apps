//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HyInject_UIWebView : NSObject
{
}

+ (void)injectShouldStartLoadWithRequestIntoDelegateClass:(Class)arg1;
+ (void)injectIntoAllDelegateClasses;
+ (void)injectClassMethod;
+ (id)shared;
+ (_Bool)isEnabled;
+ (void)setEnabled:(_Bool)arg1;
- (id)init;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 delegate:(id)arg4;

@end
