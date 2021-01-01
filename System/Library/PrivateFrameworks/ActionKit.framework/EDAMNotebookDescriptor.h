/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMNotebookDescriptor : FATObject {

	NSString* _guid;
	NSString* _notebookDisplayName;
	NSString* _contactName;
	NSNumber* _hasSharedNotebook;
	NSNumber* _joinedUserCount;

}

@property (nonatomic,retain) NSString * guid;                             //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * notebookDisplayName;              //@synthesize notebookDisplayName=_notebookDisplayName - In the implementation block
@property (nonatomic,retain) NSString * contactName;                      //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,retain) NSNumber * hasSharedNotebook;                //@synthesize hasSharedNotebook=_hasSharedNotebook - In the implementation block
@property (nonatomic,retain) NSNumber * joinedUserCount;                  //@synthesize joinedUserCount=_joinedUserCount - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(NSString *)contactName;
-(void)setContactName:(NSString *)arg1 ;
-(NSString *)notebookDisplayName;
-(void)setNotebookDisplayName:(NSString *)arg1 ;
-(NSNumber *)hasSharedNotebook;
-(void)setHasSharedNotebook:(NSNumber *)arg1 ;
-(NSNumber *)joinedUserCount;
-(void)setJoinedUserCount:(NSNumber *)arg1 ;
@end

