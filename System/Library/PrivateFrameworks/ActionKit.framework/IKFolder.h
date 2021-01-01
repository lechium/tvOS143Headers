/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IKFolder : NSObject {

	long long _folderID;
	NSString* _title;
	BOOL _syncToMobile;
	unsigned long long _position;

}

@property (assign,nonatomic) long long folderID;                       //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL syncToMobile;                        //@synthesize syncToMobile=_syncToMobile - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize position=_position - In the implementation block
+(id)unreadFolder;
+(id)starredFolder;
+(id)archiveFolder;
+(id)folderWithFolderID:(long long)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)position;
-(void)setPosition:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)folderID;
-(void)setFolderID:(long long)arg1 ;
-(id)initWithFolderID:(long long)arg1 ;
-(BOOL)syncToMobile;
-(void)setSyncToMobile:(BOOL)arg1 ;
@end

