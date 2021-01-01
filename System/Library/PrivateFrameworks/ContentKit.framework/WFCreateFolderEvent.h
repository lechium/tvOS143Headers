/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFCreateFolderEvent : WFEvent {

	unsigned _icon;
	unsigned _shortcutCount;
	NSString* _folderSource;
	NSString* _key;

}

@property (nonatomic,copy) NSString * folderSource;               //@synthesize folderSource=_folderSource - In the implementation block
@property (assign,nonatomic) unsigned icon;                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned shortcutCount;              //@synthesize shortcutCount=_shortcutCount - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(unsigned)icon;
-(void)setIcon:(unsigned)arg1 ;
-(void)setShortcutCount:(unsigned)arg1 ;
-(unsigned)shortcutCount;
-(NSString *)folderSource;
-(void)setFolderSource:(NSString *)arg1 ;
@end
