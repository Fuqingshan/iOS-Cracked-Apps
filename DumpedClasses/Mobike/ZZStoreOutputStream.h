//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutputStream.h"

@class NSError;

@interface ZZStoreOutputStream : NSOutputStream
{
    id <ZZChannelOutput> _channelOutput;
    unsigned long long _status;
    NSError *_error;
    unsigned int _crc32;
    unsigned int _size;
}

@property(readonly, nonatomic) unsigned int size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned int crc32; // @synthesize crc32=_crc32;
- (void).cxx_destruct;
- (_Bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (id)streamError;
- (unsigned long long)streamStatus;
- (id)initWithChannelOutput:(id)arg1;

@end
