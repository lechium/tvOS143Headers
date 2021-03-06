/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFActionSearchRankedCollection.h>

@class NSMutableDictionary;

@interface WFActionSearchRankedResults : WFActionSearchRankedCollection {

	NSMutableDictionary* _displayNames;
	NSMutableDictionary* _records;

}
-(id)init;
-(void)addKey:(id)arg1 withDisplayName:(id)arg2 type:(unsigned long long)arg3 ;
-(void)addAction:(id)arg1 forKey:(id)arg2 type:(unsigned long long)arg3 ;
-(id)rankedGroups;
@end

