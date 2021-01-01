/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RLMSchema, NSString, NSURL, NSData, NSArray;

@interface RLMRealmConfiguration : NSObject <NSCopying> {

	Config* _config;
	BOOL _cache;
	BOOL _dynamic;
	/*^block*/id _migrationBlock;
	/*^block*/id _shouldCompactOnLaunch;
	RLMSchema* _customSchema;
	NSString* _pathOnDisk;

}

@property (assign,nonatomic) BOOL cache;                                     //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) BOOL dynamic;                                   //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) BOOL disableFormatUpgrade; 
@property (nonatomic,copy) RLMSchema * customSchema;                         //@synthesize customSchema=_customSchema - In the implementation block
@property (nonatomic,copy) NSString * pathOnDisk;                            //@synthesize pathOnDisk=_pathOnDisk - In the implementation block
@property (nonatomic,copy) NSURL * fileURL; 
@property (nonatomic,copy) NSString * inMemoryIdentifier; 
@property (nonatomic,copy) NSData * encryptionKey; 
@property (assign,nonatomic) BOOL readOnly; 
@property (assign,nonatomic) unsigned long long schemaVersion; 
@property (nonatomic,copy) id migrationBlock;                                //@synthesize migrationBlock=_migrationBlock - In the implementation block
@property (assign,nonatomic) BOOL deleteRealmIfMigrationNeeded; 
@property (nonatomic,copy) id shouldCompactOnLaunch;                         //@synthesize shouldCompactOnLaunch=_shouldCompactOnLaunch - In the implementation block
@property (nonatomic,copy) NSArray * objectClasses; 
+(id)defaultConfiguration;
+(void)setDefaultConfiguration:(id)arg1 ;
+(id)rawDefaultConfiguration;
+(void)resetRealmConfigurationState;
+(id)wf_configurationWithRealmURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(Config*)config;
-(unsigned long long)schemaVersion;
-(BOOL)cache;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)setSchemaVersion:(unsigned long long)arg1 ;
-(BOOL)readOnly;
-(void)setDynamic:(BOOL)arg1 ;
-(void)setCache:(BOOL)arg1 ;
-(NSData *)encryptionKey;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(BOOL)dynamic;
-(RLMSchema *)customSchema;
-(id)migrationBlock;
-(void)setCustomSchema:(RLMSchema *)arg1 ;
-(BOOL)deleteRealmIfMigrationNeeded;
-(id)shouldCompactOnLaunch;
-(NSString *)inMemoryIdentifier;
-(void)setInMemoryIdentifier:(NSString *)arg1 ;
-(void)setDeleteRealmIfMigrationNeeded:(BOOL)arg1 ;
-(NSArray *)objectClasses;
-(void)setObjectClasses:(NSArray *)arg1 ;
-(BOOL)disableFormatUpgrade;
-(void)setDisableFormatUpgrade:(BOOL)arg1 ;
-(unsigned char)schemaMode;
-(void)setSchemaMode:(unsigned char)arg1 ;
-(NSString *)pathOnDisk;
-(void)setShouldCompactOnLaunch:(id)arg1 ;
-(void)setCustomSchemaWithoutCopying:(id)arg1 ;
-(id)syncConfiguration;
-(void)setMigrationBlock:(id)arg1 ;
-(void)setPathOnDisk:(NSString *)arg1 ;
@end
