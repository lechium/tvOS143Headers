/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSString, NSDate, NSArray, TVLXMLElement;

@interface TVLEventGroupElement : TVLRootElement {

	BOOL _beginPlaybackAtStartDate;
	BOOL _showChapterMarkers;
	BOOL _showDescriptionOnChapterSkip;
	int _refreshIntervalSec;
	NSString* _title;
	NSDate* _startDate;
	NSArray* _events;
	TVLXMLElement* _xml;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int refreshIntervalSec;                         //@synthesize refreshIntervalSec=_refreshIntervalSec - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL beginPlaybackAtStartDate;                  //@synthesize beginPlaybackAtStartDate=_beginPlaybackAtStartDate - In the implementation block
@property (nonatomic,retain) NSArray * events;                               //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL showChapterMarkers;                        //@synthesize showChapterMarkers=_showChapterMarkers - In the implementation block
@property (assign,nonatomic) BOOL showDescriptionOnChapterSkip;              //@synthesize showDescriptionOnChapterSkip=_showDescriptionOnChapterSkip - In the implementation block
@property (nonatomic,retain,readonly) TVLXMLElement * xml;                   //@synthesize xml=_xml - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEvents:(NSArray *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSArray *)events;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(BOOL)beginPlaybackAtStartDate;
-(BOOL)showChapterMarkers;
-(BOOL)showDescriptionOnChapterSkip;
-(int)refreshIntervalSec;
-(void)setRefreshIntervalSec:(int)arg1 ;
-(void)setBeginPlaybackAtStartDate:(BOOL)arg1 ;
-(void)setShowChapterMarkers:(BOOL)arg1 ;
-(void)setShowDescriptionOnChapterSkip:(BOOL)arg1 ;
-(TVLXMLElement *)xml;
@end
