#include "embeddinator.h"
#import <Foundation/Foundation.h>


#if !__has_feature(objc_arc)
#error Embeddinator code must be built with ARC.
#endif

// forward declarations
@class Mobile_iOS_Setup;
@class Mobile_Services_LocalizationService;
@class Mobile_ViewModels_DiagnosticsViewModel;


NS_ASSUME_NONNULL_BEGIN


/** Class Mobile_iOS_Setup
 *  Corresponding .NET Qualified Name: `Mobile.iOS.Setup, Mobile.iOS, Version=1.0.6739.27362, Culture=neutral, PublicKeyToken=null`
 */
@interface Mobile_iOS_Setup : NSObject {
}

/** This is a static type and no instance can be initialized
 *  Both the `-init` and `+new` selectors cannot be used to create instances of this type.
 */
- (nullable instancetype)init NS_UNAVAILABLE;
+ (nullable instancetype)new NS_UNAVAILABLE;


+ (void)registerServices;
@end


/** Class Mobile_Services_LocalizationService
 *  Corresponding .NET Qualified Name: `Mobile.Services.LocalizationService, Mobile.iOS, Version=1.0.6739.27362, Culture=neutral, PublicKeyToken=null`
 */
@interface Mobile_Services_LocalizationService : NSObject {
	// This field is not meant to be accessed from user code
	@public MonoEmbedObject* _object;
}

- (nullable instancetype)init;


- (NSString *)localizeS:(NSString *)aString;
- (NSString *)localizeS:(NSString *)aString value0:(NSString *)value0;
- (NSString *)localizeS:(NSString *)aString value0:(NSString *)value0 value1:(NSString *)value1;
/** This selector is not meant to be called from user code
 *  It exists solely to allow the correct subclassing of managed (.net) types
 */
- (nullable instancetype)initForSuper;

@end


/** Class Mobile_ViewModels_DiagnosticsViewModel
 *  Corresponding .NET Qualified Name: `Mobile.ViewModels.DiagnosticsViewModel, Mobile.iOS, Version=1.0.6739.27362, Culture=neutral, PublicKeyToken=null`
 */
@interface Mobile_ViewModels_DiagnosticsViewModel : NSObject {
	// This field is not meant to be accessed from user code
	@public MonoEmbedObject* _object;
}

- (nullable instancetype)init;


- (void)authenticate;
- (void)bind;
- (void)collectJobClock;
- (void)databaseReadWrite;
- (void)unbind;
/** This selector is not meant to be called from user code
 *  It exists solely to allow the correct subclassing of managed (.net) types
 */
- (nullable instancetype)initForSuper;

@end

NS_ASSUME_NONNULL_END

