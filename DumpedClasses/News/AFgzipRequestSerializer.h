//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPRequestSerializer.h"

@interface AFgzipRequestSerializer : AFHTTPRequestSerializer
{
    id <AFURLRequestSerialization> _serializer;
}

+ (id)serializerWithSerializer:(id)arg1;
@property(retain, nonatomic) id <AFURLRequestSerialization> serializer; // @synthesize serializer=_serializer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;

@end
