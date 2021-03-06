/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMURangeArray.h>

@interface VMUNonOverlappingRangeArray : VMURangeArray
-(void)addOrExtendRange:(VMURange)arg1 ;
-(void)mergeRange:(VMURange)arg1 ;
-(void)mergeRange:(VMURange)arg1 excludingRanges:(id)arg2 ;
-(void)_mergeAllBitsOfRange:(VMURange)arg1 excludingRanges:(id)arg2 mergeRanges:(BOOL)arg3 ;
-(void)sortAndMergeRanges;
-(void)mergeRanges:(id)arg1 ;
-(void)mergeRanges:(id)arg1 excludingRanges:(id)arg2 ;
-(id)subtract:(id)arg1 mergeRanges:(BOOL)arg2 ;
@end

