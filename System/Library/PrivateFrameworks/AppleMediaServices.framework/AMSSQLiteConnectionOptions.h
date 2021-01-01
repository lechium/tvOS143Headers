/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AMSSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _readOnly;
	NSString* _databasePath;
	long long _cacheSize;
	NSString* _protectionType;

}

@property (nonatomic,copy) NSString * databasePath;                        //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) long long cacheSize;                          //@synthesize cacheSize=_cacheSize - In the implementation block
@property (nonatomic,copy) NSString * protectionType;                      //@synthesize protectionType=_protectionType - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;              //@synthesize readOnly=_readOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)databasePath;
-(BOOL)isReadOnly;
-(void)setReadOnly:(BOOL)arg1 ;
-(long long)cacheSize;
-(void)setDatabasePath:(NSString *)arg1 ;
-(id)initWithDatabasePath:(id)arg1 ;
-(NSString *)protectionType;
-(void)setCacheSizeWithNumberOfKilobytes:(long long)arg1 ;
-(void)setCacheSize:(long long)arg1 ;
-(void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1 ;
-(int)applyToDatabase:(sqlite3Ref)arg1 ;
-(void)setProtectionType:(NSString *)arg1 ;
@end

