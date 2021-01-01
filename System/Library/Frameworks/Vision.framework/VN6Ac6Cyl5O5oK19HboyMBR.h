/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNEspressoModelImageprint.h>

@interface VN6Ac6Cyl5O5oK19HboyMBR : VNEspressoModelImageprint {

	unsigned long long _imageSignatureprintType;

}

@property (readonly) unsigned long long imageSignatureprintType;              //@synthesize imageSignatureprintType=_imageSignatureprintType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentVersion;
+(unsigned)currentCodingVersion;
+(unsigned long long)currentSerializationVersion;
+(unsigned long long)serializationMagicNumber;
+(BOOL)_signaturePrintTypeSupported:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)imageSignatureprintType;
-(id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)serializedLength;
-(id)initWithState:(id)arg1 error:(id*)arg2 ;
-(id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 imageSignatureprintType:(unsigned long long)arg5 requestRevision:(unsigned long long)arg6 ;
@end

