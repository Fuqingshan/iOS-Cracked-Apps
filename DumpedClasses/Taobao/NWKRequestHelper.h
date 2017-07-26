//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface NWKRequestHelper : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_requestInfo;
}

+ (id)getRequestDispatchQueue;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (id)getRequestModel:(long long)arg1;
- (void)removeRequest:(long long)arg1;
- (void)addRequest:(long long)arg1 model:(id)arg2;
- (id)init;

@end
