/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFCloudKitWebServiceQueryFilter.h>

@class NSArray;

@interface WFCloudKitWebServiceQueryFilterCombination : WFCloudKitWebServiceQueryFilter {

	NSArray* _filters;
	unsigned long long _type;

}

@property (nonatomic,retain) NSArray * filters;                    //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(id)stringRepresentationWithRecordType:(id)arg1 ;
@end

