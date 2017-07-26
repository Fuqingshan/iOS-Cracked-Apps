//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WopcNetworkAdapter, WopcNetworkBasicParam;

@interface WopcBasicRequestModel : NSObject
{
    _Bool _isLoading;
    _Bool _isTimeout;
    WopcNetworkAdapter *_network;
    NSString *_apiName;
    id <WopcBasicRequestModelDelegate> _delegate;
    NSDictionary *_params;
    NSString *_version;
    NSDictionary *_jsonData;
    NSDictionary *_errorData;
    WopcNetworkBasicParam *_networkParam;
}

@property(retain, nonatomic) WopcNetworkBasicParam *networkParam; // @synthesize networkParam=_networkParam;
@property(retain, nonatomic) NSDictionary *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSDictionary *jsonData; // @synthesize jsonData=_jsonData;
@property(nonatomic) _Bool isTimeout; // @synthesize isTimeout=_isTimeout;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) __weak id <WopcBasicRequestModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) WopcNetworkAdapter *network; // @synthesize network=_network;
- (void).cxx_destruct;
- (void)dealloc;
- (void)parseNetworkData:(id)arg1;
- (void)useAccessToken:(id)arg1;
- (void)useOpenAppKey:(id)arg1;
- (void)addExtraParam:(id)arg1;
- (void)addBusinessParam:(id)arg1;
- (void)needHttpPost:(_Bool)arg1;
- (void)needWUA:(_Bool)arg1;
- (void)needLogin:(_Bool)arg1;
- (void)cancel;
- (void)request;
- (id)init;
- (id)initWithApi:(id)arg1 version:(id)arg2;

@end
