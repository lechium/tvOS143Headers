/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSNumber;

@interface NMSFTPFile : NSObject <NSCopying> {

	BOOL _isDirectory;
	NSString* _filename;
	NSDate* _modificationDate;
	NSDate* _lastAccess;
	NSNumber* _fileSize;
	unsigned long long _ownerUserID;
	unsigned long long _ownerGroupID;
	NSString* _permissions;
	unsigned long long _flags;

}

@property (nonatomic,retain) NSString * filename;                          //@synthesize filename=_filename - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                             //@synthesize isDirectory=_isDirectory - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastAccess;                          //@synthesize lastAccess=_lastAccess - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                          //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) unsigned long long ownerUserID;               //@synthesize ownerUserID=_ownerUserID - In the implementation block
@property (assign,nonatomic) unsigned long long ownerGroupID;              //@synthesize ownerGroupID=_ownerGroupID - In the implementation block
@property (nonatomic,retain) NSString * permissions;                       //@synthesize permissions=_permissions - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                     //@synthesize flags=_flags - In the implementation block
+(id)fileWithName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)flags;
-(long long)compare:(id)arg1 ;
-(NSNumber *)fileSize;
-(BOOL)isDirectory;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSDate *)modificationDate;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSString *)permissions;
-(void)setPermissions:(NSString *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(id)initWithFilename:(id)arg1 ;
-(void)setIsDirectory:(BOOL)arg1 ;
-(void)setLastAccess:(NSDate *)arg1 ;
-(NSDate *)lastAccess;
-(void)setOwnerUserID:(unsigned long long)arg1 ;
-(unsigned long long)ownerUserID;
-(void)populateValuesFromSFTPAttributes:(LIBSSH2_SFTP_ATTRIBUTES)arg1 ;
-(id)convertPermissionToSymbolicNotation:(unsigned long long)arg1 ;
-(char)filetypeletter:(unsigned long long)arg1 ;
-(unsigned long long)ownerGroupID;
-(void)setOwnerGroupID:(unsigned long long)arg1 ;
@end

