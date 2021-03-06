//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BMLJSONDecoder : NSObject
{
    struct BMLJKParseState *parseState;
}

+ (id)decoderWithParseOptions:(unsigned long long)arg1;
+ (id)decoder;
- (id)BMLmutableObjectWithData:(id)arg1 error:(id *)arg2;
- (id)BMLmutableObjectWithData:(id)arg1;
- (id)BMLmutableObjectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)BMLmutableObjectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)BMLobjectWithData:(id)arg1 error:(id *)arg2;
- (id)BMLobjectWithData:(id)arg1;
- (id)BMLobjectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)BMLobjectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)BMLparseJSONData:(id)arg1 error:(id *)arg2;
- (id)BMLparseJSONData:(id)arg1;
- (id)BMLparseUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)BMLparseUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (void)clearCache;
- (void)dealloc;
- (id)initWithParseOptions:(unsigned long long)arg1;
- (id)init;

@end

