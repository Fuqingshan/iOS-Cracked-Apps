//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MAMReachability;

@interface MAMNetworkMonitor : NSObject
{
    int _netOperator;
    long long _netWork;
    MAMReachability *_networkReachable;
}

+ (id)shareInstance;
@property(retain, nonatomic) MAMReachability *networkReachable; // @synthesize networkReachable=_networkReachable;
@property int netOperator; // @synthesize netOperator=_netOperator;
@property long long netWork; // @synthesize netWork=_netWork;
- (void).cxx_destruct;
- (void)checkNetworkStatus:(id)arg1;
- (void)checkNetworkEnvironment;
- (void)dealloc;
- (void)findNetOperator:(id)arg1;
- (id)init;

@end
