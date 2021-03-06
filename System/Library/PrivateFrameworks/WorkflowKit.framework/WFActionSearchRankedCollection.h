/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableOrderedSet;

@interface WFActionSearchRankedCollection : NSObject {

	NSMutableOrderedSet* _itemsWithExactNameMatch;
	NSMutableOrderedSet* _itemsWithNameMatch;
	NSMutableOrderedSet* _itemsWithCategoryMatch;
	NSMutableOrderedSet* _itemsWithKeywordMatch;

}
-(id)init;
-(id)orderedSetForType:(unsigned long long)arg1 ;
-(void)addItem:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)prioritizeItem:(id)arg1 type:(unsigned long long)arg2 ;
-(id)rankedItems;
@end

