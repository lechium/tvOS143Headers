/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray;

@interface _UIOrderedRangeIndexer : NSObject {

	shared_ptr<_UIOrderedRangeIndexerImpl>* _orderedRangeIndexerImpl;

}

@property (nonatomic,readonly) long long numberOfRanges; 
@property (nonatomic,readonly) NSArray * orderedRanges; 
@property (nonatomic,readonly) NSRange containingRange; 
-(id)description;
-(id)init;
-(NSRange)rangeAtIndex:(long long)arg1 ;
-(long long)numberOfRanges;
-(long long)indexOfRangeContainingLocation:(long long)arg1 ;
-(void)appendRange:(NSRange)arg1 ;
-(NSArray *)orderedRanges;
-(NSRange)rangeContainingLocation:(long long)arg1 ;
-(NSRange)containingRange;
@end

