/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IntlPreferences/ISMigrator.h>

@interface ISRootMigrator : ISMigrator {

	BOOL _isErase;
	BOOL _isRestoreFromBackup;

}

@property (assign,nonatomic) BOOL isErase;                          //@synthesize isErase=_isErase - In the implementation block
@property (assign,nonatomic) BOOL isRestoreFromBackup;              //@synthesize isRestoreFromBackup=_isRestoreFromBackup - In the implementation block
-(BOOL)performMigration;
-(id)performMigrationForPreferences:(id)arg1 ;
-(id)performMigrationForUserPreferences:(id)arg1 systemPreferences:(id)arg2 ;
-(BOOL)isErase;
-(BOOL)isRestoreFromBackup;
-(void)updateAppleLanguagesSchemaVersionToCurrent;
-(id)importPreferredLanguagesForPreferences:(id)arg1 ;
-(id)appendRegionalVariantsToLanguageIdentifiers:(id)arg1 regionCode:(id)arg2 ;
-(id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg1 ;
-(void)setIsErase:(BOOL)arg1 ;
-(void)setIsRestoreFromBackup:(BOOL)arg1 ;
@end

