//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutNewStoreCommentTagModel : TBJSONModel
{
    int _tagCount;
    long long _tagId;
    NSString *_tagText;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) int tagCount; // @synthesize tagCount=_tagCount;
@property(copy, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(nonatomic) long long tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;

@end
