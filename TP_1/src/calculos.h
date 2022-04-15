
/** \brief -- Realiza descuento del 10%
 *
 * \param precio float -- Precio
 * \return float -- Precio con el descuento del 10%
 *
 */
float descuentoDebito(float precio);

/** \brief -- Calcula el precio final con interes del 25%
 *
 * \param precio float -- precio
 * \return float -- Precio con el interes del 25%
 *
 */
float interesCredito(float precio);

/** \brief -- Convierte ARS en BTC
 *
 * \param precio -- Monto en ARS
 * \return float -- Monto en BTC
 *
 */
float arsToBtc(float precio);
/** \brief -- Calcula el precio por kilometro
 *
 * \param precio float -- Precio del recorrido
 * \param km float --Cabtidad de kilometros
 * \return float -- Precio por kilometro
 *
 */
float precioPorKm(float precio, float km);
/** \brief Calcula la diferencia de precio entre 2 aerolineas
 *
 * \param pAerolineas float -- Precio de una aerolinea
 * \param pLatam float --  Precio de otra aerolinea
 * \return -- float Diferencia de precio
 *
 */
float diferenciaPrecio(float pAerolineas, float pLatam);

