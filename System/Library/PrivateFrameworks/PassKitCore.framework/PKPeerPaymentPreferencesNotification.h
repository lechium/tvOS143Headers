/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPeerPaymentPreferencesNotification : NSObject <NSSecureCoding, NSCopying> {

	BOOL _value;
	NSString* _altDSID;
	unsigned long long _notificationType;

}

@property (nonatomic,copy) NSString * altDSID;                                 //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) unsigned long long notificationType;              //@synthesize notificationType=_notificationType - In the implementation block
@property (assign,nonatomic) BOOL value;                                       //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setNotificationType:(unsigned long long)arg1 ;
-(unsigned long long)notificationType;
-(BOOL)isEqualToPreferencesNotification:(id)arg1 ;
@end

