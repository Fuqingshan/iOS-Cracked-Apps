//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGColorRingAlertView;

@protocol KGColorRingAlertViewDelegate <NSObject>
- (void)confirmButtonClicked:(KGColorRingAlertView *)arg1 index:(long long)arg2;
- (void)getVaildCodeButtonClicked:(KGColorRingAlertView *)arg1 index:(long long)arg2;

@optional
- (void)clickedButtonAtIndex:(long long)arg1;
- (void)cancelButtonClicked:(KGColorRingAlertView *)arg1 index:(long long)arg2;
@end

