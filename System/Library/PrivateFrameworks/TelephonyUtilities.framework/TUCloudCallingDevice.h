/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface TUCloudCallingDevice : NSObject <NSSecureCoding, NSCopying> {

	BOOL _defaultPairedDevice;
	BOOL _supportsRestrictingSecondaryCalling;
	NSString* _name;
	NSString* _modelIdentifier;
	NSString* _uniqueID;
	NSArray* _linkedUserURIs;

}

@property (nonatomic,copy) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * modelIdentifier;                                           //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSArray * linkedUserURIs;                                             //@synthesize linkedUserURIs=_linkedUserURIs - In the implementation block
@property (assign,getter=isDefaultPairedDevice,nonatomic) BOOL defaultPairedDevice;              //@synthesize defaultPairedDevice=_defaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL supportsRestrictingSecondaryCalling;                           //@synthesize supportsRestrictingSecondaryCalling=_supportsRestrictingSecondaryCalling - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(BOOL)isDefaultPairedDevice;
-(NSString *)modelIdentifier;
-(NSArray *)linkedUserURIs;
-(BOOL)supportsRestrictingSecondaryCalling;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(void)setLinkedUserURIs:(NSArray *)arg1 ;
-(void)setDefaultPairedDevice:(BOOL)arg1 ;
-(void)setSupportsRestrictingSecondaryCalling:(BOOL)arg1 ;
@end

