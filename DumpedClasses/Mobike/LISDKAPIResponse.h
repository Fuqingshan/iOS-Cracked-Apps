//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface LISDKAPIResponse : NSObject
{
    int _statusCode;
    NSString *_data;
    NSDictionary *_headers;
}

@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSString *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 headers:(id)arg2 statusCode:(int)arg3;

@end
