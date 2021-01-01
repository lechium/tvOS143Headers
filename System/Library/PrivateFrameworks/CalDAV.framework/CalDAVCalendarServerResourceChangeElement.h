/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItemWithHrefChildItem.h>

@class CalDAVUpdateOwnerItem, NSURL;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem {

	CalDAVUpdateOwnerItem* _changedBy;

}

@property (nonatomic,readonly) NSURL * fullHrefURL; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * changedBy;              //@synthesize changedBy=_changedBy - In the implementation block
-(id)init;
-(id)copyParseRules;
-(void)setChangedBy:(CalDAVUpdateOwnerItem *)arg1 ;
-(NSURL *)fullHrefURL;
-(CalDAVUpdateOwnerItem *)changedBy;
@end

