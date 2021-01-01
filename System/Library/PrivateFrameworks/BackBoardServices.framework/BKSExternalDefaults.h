/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BKSAbstractDefaults.h>

@class BKSLockdownDefaults, BKSIAPDefaults, BKSPersistentConnectionDefaults, BKSSpringBoardDefaults, BKSKeyboardDefaults;

@interface BKSExternalDefaults : BKSAbstractDefaults {

	BKSLockdownDefaults* _lazy_lockdownDefaults;
	BKSIAPDefaults* _lazy_iapDefaults;
	BKSPersistentConnectionDefaults* _lazy_persistentConnectionDefaults;
	BKSSpringBoardDefaults* _lazy_springBoardDefaults;
	BKSKeyboardDefaults* _lazy_keyboardDefaults;

}

@property (nonatomic,retain,readonly) BKSLockdownDefaults * lockdownDefaults; 
@property (nonatomic,retain,readonly) BKSIAPDefaults * iapDefaults; 
@property (nonatomic,retain,readonly) BKSPersistentConnectionDefaults * persistentConnectionDefaults; 
@property (nonatomic,retain,readonly) BKSSpringBoardDefaults * springBoardDefaults; 
@property (nonatomic,retain,readonly) BKSKeyboardDefaults * keyboardDefaults; 
-(BKSLockdownDefaults *)lockdownDefaults;
-(BKSIAPDefaults *)iapDefaults;
-(BKSPersistentConnectionDefaults *)persistentConnectionDefaults;
-(BKSSpringBoardDefaults *)springBoardDefaults;
-(BKSKeyboardDefaults *)keyboardDefaults;
@end
