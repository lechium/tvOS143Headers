/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIToken : NSObject {

	CFStringRef _string;
	SCD_Struct_PS28 _range;

}

@property (nonatomic,retain) CFStringRef string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) SCD_Struct_PS28 range;              //@synthesize range=_range - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(CFStringRef)string;
-(void)setString:(CFStringRef)arg1 ;
-(SCD_Struct_PS28)range;
-(void)setRange:(SCD_Struct_PS28)arg1 ;
-(id)initWithString:(CFStringRef)arg1 range:(SCD_Struct_PS28)arg2 ;
@end
