/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFClientSubCredentialParams : NSObject <NSSecureCoding> {

	NSString* _adamID;
	NSArray* _adamIDs;
	NSString* _title;
	NSString* _subtitle;
	NSString* _issuerID;

}

@property (nonatomic,copy) NSString * adamID;                //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy) NSArray * adamIDs;                //@synthesize adamIDs=_adamIDs - In the implementation block
@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * issuerID;              //@synthesize issuerID=_issuerID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setAdamID:(NSString *)arg1 ;
-(NSString *)adamID;
-(NSArray *)adamIDs;
-(void)setAdamIDs:(NSArray *)arg1 ;
-(NSString *)issuerID;
-(void)setIssuerID:(NSString *)arg1 ;
@end

