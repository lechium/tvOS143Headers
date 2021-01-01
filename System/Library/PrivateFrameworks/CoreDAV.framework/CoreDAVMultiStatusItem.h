/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableArray, CoreDAVLeafItem, NSSet;

@interface CoreDAVMultiStatusItem : CoreDAVItem {

	NSMutableArray* _orderedResponses;
	CoreDAVLeafItem* _responseDescription;

}

@property (nonatomic,readonly) NSSet * responses; 
@property (nonatomic,retain) NSMutableArray * orderedResponses;                  //@synthesize orderedResponses=_orderedResponses - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;              //@synthesize responseDescription=_responseDescription - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)init;
-(NSSet *)responses;
-(void)addResponse:(id)arg1 ;
-(NSMutableArray *)orderedResponses;
-(CoreDAVLeafItem *)responseDescription;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(void)setOrderedResponses:(NSMutableArray *)arg1 ;
@end

