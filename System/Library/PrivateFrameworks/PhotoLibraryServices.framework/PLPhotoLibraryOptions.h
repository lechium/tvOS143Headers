/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PLPhotoLibraryOptions : NSObject <NSSecureCoding> {

	BOOL _automaticallyMergesContext;
	BOOL _preventsWaitingForRequiredState;
	long long _requiredState;
	unsigned long long _libraryRole;
	unsigned long long _libraryInitiator;

}

@property (assign,nonatomic) BOOL automaticallyMergesContext;                   //@synthesize automaticallyMergesContext=_automaticallyMergesContext - In the implementation block
@property (assign,nonatomic) long long requiredState;                           //@synthesize requiredState=_requiredState - In the implementation block
@property (assign,nonatomic) unsigned long long libraryRole;                    //@synthesize libraryRole=_libraryRole - In the implementation block
@property (assign,nonatomic) BOOL preventsWaitingForRequiredState;              //@synthesize preventsWaitingForRequiredState=_preventsWaitingForRequiredState - In the implementation block
@property (assign,nonatomic) unsigned long long libraryInitiator;               //@synthesize libraryInitiator=_libraryInitiator - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)requiredState;
-(void)setRequiredState:(long long)arg1 ;
-(BOOL)automaticallyMergesContext;
-(BOOL)preventsWaitingForRequiredState;
-(void)setAutomaticallyMergesContext:(BOOL)arg1 ;
-(void)setLibraryRole:(unsigned long long)arg1 ;
-(void)setPreventsWaitingForRequiredState:(BOOL)arg1 ;
-(unsigned long long)libraryRole;
-(unsigned long long)libraryInitiator;
-(void)setLibraryInitiator:(unsigned long long)arg1 ;
@end

