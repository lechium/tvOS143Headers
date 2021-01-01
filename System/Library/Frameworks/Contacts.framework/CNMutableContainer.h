/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNContainer.h>

@class CNContainer, NSString, NSData, NSDate;

@interface CNMutableContainer : CNContainer

@property (nonatomic,copy) CNContainer * snapshot; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * externalSyncTag; 
@property (nonatomic,copy) NSData * externalSyncData; 
@property (nonatomic,copy) NSString * constraintsPath; 
@property (nonatomic,copy) NSString * meIdentifier; 
@property (assign,nonatomic) unsigned long long restrictions; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
-(NSString *)name;
-(id)copy;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(unsigned long long)restrictions;
-(void)setRestrictions:(unsigned long long)arg1 ;
-(void)setSnapshot:(CNContainer *)arg1 ;
-(NSDate *)lastSyncDate;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(int)iOSLegacyIdentifier;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSString *)externalSyncTag;
-(void)setExternalSyncTag:(NSString *)arg1 ;
-(NSData *)externalSyncData;
-(void)setExternalSyncData:(NSData *)arg1 ;
-(NSString *)constraintsPath;
-(void)setConstraintsPath:(NSString *)arg1 ;
-(NSString *)meIdentifier;
-(void)setMeIdentifier:(NSString *)arg1 ;
-(BOOL)isGuardianRestricted;
-(void)setGuardianRestricted:(BOOL)arg1 ;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)setGuardianRestricted:(BOOL)arg1 shouldPushChangeToServer:(BOOL)arg2 ;
@end

