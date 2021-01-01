/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSString;

@interface FBSShutdownOptions : NSObject <BSXPCCoding, NSCopying> {

	NSString* _reason;
	long long _rebootType;
	long long _source;
	long long _LPEMOption;
	id<NSCopying> _localContext;

}

@property (assign,nonatomic) long long LPEMOption;                           //@synthesize LPEMOption=_LPEMOption - In the implementation block
@property (assign,nonatomic,__weak) id<NSCopying> localContext;              //@synthesize localContext=_localContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long rebootType;                           //@synthesize rebootType=_rebootType - In the implementation block
@property (assign,nonatomic) long long source;                               //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL isShutdown; 
@property (nonatomic,readonly) BOOL isReboot; 
@property (nonatomic,readonly) BOOL isUserInitiated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)reason;
-(long long)source;
-(void)setSource:(long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(void)setRebootType:(long long)arg1 ;
-(BOOL)isUserInitiated;
-(void)setLPEMOption:(long long)arg1 ;
-(void)setLocalContext:(id<NSCopying>)arg1 ;
-(BOOL)isShutdown;
-(BOOL)isReboot;
-(long long)rebootType;
-(long long)LPEMOption;
-(id<NSCopying>)localContext;
@end

