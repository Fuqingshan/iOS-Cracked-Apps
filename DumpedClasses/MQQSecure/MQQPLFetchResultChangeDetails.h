//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

@interface MQQPLFetchResultChangeDetails : NSObject
{
    _Bool _hasIncrementalChanges;
    _Bool _hasMoves;
    _Bool _incompleted;
    NSIndexSet *_removedIndexes;
    NSArray *_removedObjects;
    NSIndexSet *_insertedIndexes;
    NSArray *_insertedObjects;
    NSIndexSet *_changedIndexes;
    NSArray *_changedObjects;
}

@property(nonatomic) _Bool incompleted; // @synthesize incompleted=_incompleted;
@property(nonatomic) _Bool hasMoves; // @synthesize hasMoves=_hasMoves;
@property(retain, nonatomic) NSArray *changedObjects; // @synthesize changedObjects=_changedObjects;
@property(retain, nonatomic) NSIndexSet *changedIndexes; // @synthesize changedIndexes=_changedIndexes;
@property(retain, nonatomic) NSArray *insertedObjects; // @synthesize insertedObjects=_insertedObjects;
@property(retain, nonatomic) NSIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
@property(retain, nonatomic) NSArray *removedObjects; // @synthesize removedObjects=_removedObjects;
@property(retain, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;
@property(nonatomic) _Bool hasIncrementalChanges; // @synthesize hasIncrementalChanges=_hasIncrementalChanges;
- (void)dealloc;

@end

