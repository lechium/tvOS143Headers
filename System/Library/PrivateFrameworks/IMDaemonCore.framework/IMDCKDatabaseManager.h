/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKContainer;

@interface IMDCKDatabaseManager : NSObject {

	CKContainer* _manateeContainer;
	CKContainer* _nonHSA2ManateeContainer;
	CKContainer* _nickNameContainer;

}

@property (nonatomic,readonly) CKContainer * manateeContainer;                     //@synthesize manateeContainer=_manateeContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * nonHSA2ManateeContainer;              //@synthesize nonHSA2ManateeContainer=_nonHSA2ManateeContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * nickNameContainer;                    //@synthesize nickNameContainer=_nickNameContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * truthContainer; 
@property (nonatomic,readonly) BOOL useStingRay; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CKContainer *)truthContainer;
-(id)truthDatabase;
-(id)manateeDataBase;
-(id)nonHSA2ManateeDatabase;
-(BOOL)useStingRay;
-(BOOL)_serverSaysToUseOldContainer;
-(id)_nickNameContainerIdentifier;
-(CKContainer *)manateeContainer;
-(CKContainer *)nonHSA2ManateeContainer;
-(id)_nickNameContainer;
-(id)truthPublicDatabase;
-(id)nickNamePublicDatabase;
-(void)fetchCurrentUserForNicknameContainer:(/*^block*/id)arg1 ;
-(CKContainer *)nickNameContainer;
@end

