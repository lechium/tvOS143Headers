/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GPBEnumDescriptor;

@interface GPBExtensionDescriptor : NSObject <NSCopying> {

	GPBExtensionDescription* description_;
	SCD_Union_GP8 defaultValue_;
	Class containingMessageClass_;

}

@property (nonatomic,readonly) int wireType; 
@property (nonatomic,readonly) int alternateWireType; 
@property (nonatomic,readonly) unsigned fieldNumber; 
@property (nonatomic,readonly) Class containingMessageClass; 
@property (nonatomic,readonly) unsigned char dataType; 
@property (getter=isRepeated,nonatomic,readonly) BOOL repeated; 
@property (getter=isPackable,nonatomic,readonly) BOOL packable; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,readonly) NSString * singletonName; 
@property (nonatomic,readonly) GPBEnumDescriptor * enumDescriptor; 
@property (nonatomic,readonly) id defaultValue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned char)dataType;
-(id)defaultValue;
-(int)wireType;
-(BOOL)isPackable;
-(GPBEnumDescriptor *)enumDescriptor;
-(Class)msgClass;
-(id)initWithExtensionDescription:(GPBExtensionDescription*)arg1 ;
-(NSString *)singletonName;
-(const char*)singletonNameC;
-(unsigned)fieldNumber;
-(int)alternateWireType;
-(BOOL)isRepeated;
-(long long)compareByFieldNumber:(id)arg1 ;
-(Class)containingMessageClass;
@end
