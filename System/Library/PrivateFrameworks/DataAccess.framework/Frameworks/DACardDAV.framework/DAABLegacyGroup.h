/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DACardDAV/DAGroup.h>

@class NSString;

@interface DAABLegacyGroup : NSObject <DAGroup> {

	void* _group;

}

@property (nonatomic,readonly) void* group;                         //@synthesize group=_group - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void*)group;
-(id)eTag;
-(void)setETag:(id)arg1 ;
-(int)legacyIdentifier;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)initWithGroup:(void*)arg1 ;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(BOOL)isContact;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)asGroup;
-(void*)asABGroup;
@end

