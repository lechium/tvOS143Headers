/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBSystemShellInitializationOptions.h>

@interface FBMutableSystemShellInitializationOptions : FBSystemShellInitializationOptions

@property (assign,nonatomic) BOOL initializeReadyForInteraction; 
@property (assign,nonatomic) BOOL resetDarkBootState; 
@property (assign,nonatomic) BOOL shouldWaitForMigrator; 
@property (assign,nonatomic) double systemSleepInterval; 
@property (nonatomic,copy) id registerAdditionalServicesBlock; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInitializeReadyForInteraction:(BOOL)arg1 ;
-(void)setResetDarkBootState:(BOOL)arg1 ;
-(void)setShouldWaitForMigrator:(BOOL)arg1 ;
-(void)setSystemSleepInterval:(double)arg1 ;
-(void)setRegisterAdditionalServicesBlock:(id)arg1 ;
@end

