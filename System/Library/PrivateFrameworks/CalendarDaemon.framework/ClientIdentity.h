/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CalendarDaemon/CalendarDaemon-Structs.h>
@class NSString;

@interface ClientIdentity : NSObject {

	int _pid;
	NSString* _bundleIdentifier;
	NSString* _clientName;
	NSString* _codeSigningIdentity;
	SCD_Struct_Cl4 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_Cl4 auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                       //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeSigningIdentity;              //@synthesize codeSigningIdentity=_codeSigningIdentity - In the implementation block
@property (nonatomic,readonly) int pid;                                          //@synthesize pid=_pid - In the implementation block
-(id)description;
-(NSString *)bundleIdentifier;
-(SCD_Struct_Cl4)auditToken;
-(int)pid;
-(id)initWithAuditToken:(SCD_Struct_Cl4)arg1 ;
-(NSString *)clientName;
-(NSString *)codeSigningIdentity;
@end

