/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFTimeStamp
@property (readonly,nonatomic) double time; 
@property (readonly,nonatomic) double avTime; 
@property (readonly,nonatomic) SCD_Struct_Me0 hostTime; 
@property (readonly,nonatomic) double userSecondsSinceReferenceDate; 
@required
-(double)time;
-(SCD_Struct_Me0)hostTime;
-(double)userSecondsSinceReferenceDate;
-(double)avTime;

@end
