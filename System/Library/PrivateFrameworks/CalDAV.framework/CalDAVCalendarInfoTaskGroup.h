/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVContainerInfoTaskGroup.h>

@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup {

	BOOL _fetchSharees;

}

@property (assign,nonatomic) BOOL fetchSharees;              //@synthesize fetchSharees=_fetchSharees - In the implementation block
-(id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3 ;
-(id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2 ;
-(id)_copyContainerParserMappings;
-(BOOL)fetchSharees;
-(id)containerForURL:(id)arg1 ;
-(void)setFetchSharees:(BOOL)arg1 ;
@end
