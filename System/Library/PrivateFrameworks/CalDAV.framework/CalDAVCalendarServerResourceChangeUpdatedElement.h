/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement {

	BOOL _content;
	CoreDAVItem* _prop;
	NSMutableSet* _calendarChanges;

}

@property (assign,nonatomic) BOOL content;                                //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                          //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) NSMutableSet * calendarChanges;              //@synthesize calendarChanges=_calendarChanges - In the implementation block
-(id)init;
-(BOOL)content;
-(void)setContent:(BOOL)arg1 ;
-(id)copyParseRules;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(NSMutableSet *)calendarChanges;
-(void)setCalendarChanges:(NSMutableSet *)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(void)addCalendarChange:(id)arg1 ;
@end

