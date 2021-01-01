/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItemWithNoChildren.h>

@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren {

	NSString* _nameAttribute;
	NSString* _typeAttribute;

}

@property (nonatomic,retain) NSString * nameAttribute;              //@synthesize nameAttribute=_nameAttribute - In the implementation block
@property (nonatomic,retain) NSString * typeAttribute;              //@synthesize typeAttribute=_typeAttribute - In the implementation block
-(void)parserFoundAttributes:(id)arg1 ;
-(void)setNameAttribute:(NSString *)arg1 ;
-(NSString *)nameAttribute;
-(void)setTypeAttribute:(NSString *)arg1 ;
-(NSString *)typeAttribute;
@end
