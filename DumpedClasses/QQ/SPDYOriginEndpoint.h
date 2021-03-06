//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPDYOrigin;

@interface SPDYOriginEndpoint : NSObject
{
    unsigned short _port;
    int _type;
    SPDYOrigin *_origin;
    NSString *_host;
    NSString *_user;
    NSString *_password;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *user; // @synthesize user=_user;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) SPDYOrigin *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 user:(id)arg3 password:(id)arg4 type:(int)arg5 origin:(id)arg6;

@end

