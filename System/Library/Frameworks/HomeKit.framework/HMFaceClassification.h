/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMPerson, HMFaceCrop, NSString, NSArray;

@interface HMFaceClassification : NSObject <HMFObject, NSCopying, NSSecureCoding> {

	NSUUID* _personManagerUUID;
	HMPerson* _person;
	HMFaceCrop* _faceCrop;

}

@property (copy,readonly) NSUUID * personManagerUUID;                             //@synthesize personManagerUUID=_personManagerUUID - In the implementation block
@property (copy,readonly) HMPerson * person;                                      //@synthesize person=_person - In the implementation block
@property (copy,readonly) HMFaceCrop * faceCrop;                                  //@synthesize faceCrop=_faceCrop - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMPerson *)person;
-(NSString *)shortDescription;
-(NSString *)privateDescription;
-(NSArray *)attributeDescriptions;
-(NSUUID *)personManagerUUID;
-(HMFaceCrop *)faceCrop;
-(id)initWithPersonManagerUUID:(id)arg1 person:(id)arg2 faceCrop:(id)arg3 ;
@end
