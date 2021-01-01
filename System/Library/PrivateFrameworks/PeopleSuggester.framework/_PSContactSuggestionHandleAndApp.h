/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface _PSContactSuggestionHandleAndApp : NSObject <NSCopying, NSSecureCoding> {

	NSString* _handle;
	NSString* _appBundleId;
	NSNumber* _interactionMechanism;

}

@property (nonatomic,copy) NSString * handle;                            //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * appBundleId;                       //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,copy) NSNumber * interactionMechanism;              //@synthesize interactionMechanism=_interactionMechanism - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)setInteractionMechanism:(NSNumber *)arg1 ;
-(NSNumber *)interactionMechanism;
@end

