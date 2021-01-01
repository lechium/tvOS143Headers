/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSArray;

@interface DMFSetDeclarationsRequest : DMFTaskRequest {

	NSString* _organizationIdentifier;
	NSString* _syncToken;
	NSArray* _declarations;

}

@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * syncToken;                           //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,copy) NSArray * declarations;                         //@synthesize declarations=_declarations - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
-(NSArray *)declarations;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(void)setDeclarations:(NSArray *)arg1 ;
@end

