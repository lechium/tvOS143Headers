/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNVCardXSOCIALPROFILEParser : NSObject
+(id)os_log;
+(id)valueWithParser:(id)arg1 ;
+(void)processExtensionValuesForLines:(id)arg1 parser:(id)arg2 ;
+(id)unfold:(id)arg1 ;
+(BOOL)propertyLooksLikeDOSAttackString:(id)arg1 ;
+(id)typeForSocialProperty:(id)arg1 ;
+(id)urlSuffixForSocialProperty:(id)arg1 ;
+(id)profileFromURL:(id)arg1 ;
+(id)parametersForSocialProperty:(id)arg1 ;
+(id)adjust:(id)arg1 withParameters:(id)arg2 ;
+(void)handleSpecialCaseUpdateForService:(id)arg1 socialProfile:(id)arg2 ;
+(void)handleBundleIndentifiersAsList:(id)arg1 socialProfile:(id)arg2 ;
+(id)rawForSocialProperty:(id)arg1 ;
+(id)unwrapDoubleQuotedProperty:(id)arg1 ;
@end

